//
//  ViewController.h
//  Flicks
//
//  Created by Michael Cieplak on 1/23/17.
//  Copyright © 2017 Michael Cieplak. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MovieCell.h"
#import "Movie.h"

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITableView *movieTableView;
@property (strong, nonatomic) NSMutableArray * movies;


@end

