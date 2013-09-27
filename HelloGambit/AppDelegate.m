//
//  AppDelegate.m
//  HelloGambit
//
//  Created by Aaron Clarke on 9/26/13.
//  Copyright (c) 2013 Aaron Clarke. All rights reserved.
//

#import "AppDelegate.h"

#define ___VERSION 407000
#include "gambit.h"

/*
 * the link file "prog_.c" is generated.  It contains various tables
 * (symbols, global variables, list of modules, etc) describing the
 * set of Scheme modules that are linked.  The link file is needed to
 * initialize the Scheme runtime system.
 *
 * The symbol SCHEME_LINKER must be defined as the name of the Scheme
 * link file stripped of the extension, prefixed with "____20_" and
 * the character "_" transformed to "__".  This is the name of the
 * function in the link file that initializes the Scheme modules.
 */
//#define SCHEME_LINKER ____20_prog__
#define SCHEME_LINKER ____20_helloworld__

___BEGIN_C_LINKAGE
extern ___mod_or_lnk SCHEME_LINKER(___global_state_struct*);
___END_C_LINKAGE


/* Forward declare the function from test-gambit.scm */
void test_gambit(char* str);


static void runGambit()
{
    fprintf(stdout, "Starting test ...\n");
    
    /*
     * Setup the Scheme library by calling "___setup" with appropriate
     * parameters.  The call to "___setup_params_reset" sets all
     * parameters to their default setting.  The call to "___setup" also
     * runs the Scheme code at toplevel.  After the call to "___setup"
     * and before the call to "___cleanup" it is possible to call Scheme
     * functions from C if required.
     */
    ___setup_params_struct setup_params;
    
    ___setup_params_reset(&setup_params);
    
    setup_params.version = ___VERSION;
    setup_params.linker  = SCHEME_LINKER;
    
    ___setup(&setup_params);
    
    
    /* Now call our function from test_gambit.scm */
    test_gambit("Wow, this actually worked!\n");
    
    
    /*
     * Cleanup the Scheme runtime.
     */
    fprintf(stdout, "\nEnding ...\n");
    
    ___cleanup();
}

@implementation AppDelegate

- (void)dealloc
{
    [_window release];
    [super dealloc];
}

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]] autorelease];
    // Override point for customization after application launch.
    self.window.backgroundColor = [UIColor whiteColor];
    [self.window makeKeyAndVisible];
    
    
    runGambit();
    
    
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later. 
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end
