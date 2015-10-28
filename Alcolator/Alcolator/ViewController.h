//
//  ViewController.h
//  Alcolator
//
//  Created by Rahul Aurora Srinivasan on 10/16/15.
//  Copyright © 2015 curdriceaurora. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;

- (void)buttonPressed:(UIButton *)sender;

@end

