//
//  Movie.m
//  Flicks
//
//  Created by Michael Cieplak on 1/24/17.
//  Copyright © 2017 Michael Cieplak. All rights reserved.
//

#import "Movie.h"

@implementation Movie

-(id) initWithDict:(NSDictionary *)result {
    self = [super init];
    
    if (self) {
        self.title = result[@"title"];
        self.desc = result[@"overview"];
        self.posterURL = [NSString stringWithFormat: @"https://image.tmdb.org/t/p/w45%@", result[@"poster_path"]];
    }
    
    return self;
}

@end
