//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol BKDirectHitTestEventDispatcher;

@interface BKHIDEventPoster : NSObject
{
    NSMutableDictionary *_clientPortToEventCount;	// 8 = 0x8
    NSMutableArray *_postables;	// 16 = 0x10
    id <BKDirectHitTestEventDispatcher> _dispatcher;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000025972

@end

