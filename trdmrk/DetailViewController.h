//
//  DetailViewController.h
//  trdmrk
//
//  Created by Dwayne Hans on 6/29/16.
//  Copyright © 2016 Dwayne Hans. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

