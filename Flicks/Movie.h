//
//  Movie.h
//  Flicks
//
//  Created by Michael Cieplak on 1/24/17.
//  Copyright © 2017 Michael Cieplak. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Movie : NSObject
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *desc;
@property (strong, nonatomic) NSString *posterURL;

-(id) initWithDict:(NSDictionary *)result;


@end
