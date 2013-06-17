//
//  iSXAppController.h
//  iOScanX
//
//  Created by Alessio Maffeis on 28/05/13.
//  Copyright (c) 2013 Alessio Maffeis. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "iSXAppsViewController.h"

@interface  iSXAppController : NSObject

@property (strong) NSViewController *mainViewController;
@property (assign) IBOutlet NSView *mainView;

- (IBAction)showApps:(id)sender;
- (IBAction)showModules:(id)sender;
- (IBAction)showEvaluations:(id)sender;
- (IBAction)showResults:(id)sender;
- (IBAction)toggleStart:(id)sender;

@end
