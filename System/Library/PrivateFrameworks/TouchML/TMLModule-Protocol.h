//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TouchML/NSObject-Protocol.h>

@class JSValue;

@protocol TMLModule <NSObject>
+ (_Bool)loadModule;

@optional
+ (void)initializeJSContext:(JSValue *)arg1;
@end
