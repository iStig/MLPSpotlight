//
//  MLPViewController.h
//  MLPSpotlightDemo
//
//  Created by Eddy Borja on 1/26/13.
//  Copyright (c) 2013 Mainloop. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MLPViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *spotlightLabel;
@property (strong, nonatomic) IBOutlet UILabel *spot;
- (IBAction)spotlightToggle:(id)sender;

@end
