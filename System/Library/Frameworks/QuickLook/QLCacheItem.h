//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, QLItem;

__attribute__((visibility("hidden")))
@interface QLCacheItem : NSObject
{
    NSMutableArray *_handlers;	// 8 = 0x8
    QLItem *_item;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003a107
@property(retain, nonatomic) QLItem *item; // @synthesize item=_item;
- (void)_performHandlers;	// IMP=0x0000000000039ec9
- (void)invalidate;	// IMP=0x0000000000039e99
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000039d46

@end

