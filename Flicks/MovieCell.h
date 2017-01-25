//
//  MovieCell.h
//  Flicks
//
//  Created by Michael Cieplak on 1/23/17.
//  Copyright © 2017 Michael Cieplak. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MovieCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *movieTitle;
@property (weak, nonatomic) IBOutlet UILabel *movieDesc;
@property (weak, nonatomic) IBOutlet UIImageView *movieImage;

@end
