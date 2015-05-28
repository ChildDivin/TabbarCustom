//
//  Singleton.m
//  InstagramApp
//
//  Created by Webinfoways on 15/02/13.
//  Copyright (c) 2013 WebPlanex. All rights reserved.
//

#import "Singleton.h"

@implementation Singleton
@synthesize strDBPath;

static Singleton *singletonObj = NULL;

+ (Singleton *)sharedSingleton {
    @synchronized(self) {
        if (singletonObj == NULL)
            singletonObj = [[self alloc] init];
    }
    return(singletonObj);
}
// Server URL
- (NSString *) getBaseURL {
    return @"http://topsdemo.in/mit/parles/ws/";
}
//Database path
-(void) setDBPath : (NSString *) path {
    self.strDBPath = path;
}
-(NSString *) getDBPath {
    return self.strDBPath;
}

@end
