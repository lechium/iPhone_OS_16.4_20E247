//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UICalendarViewDecorationSystem : NSObject
{
    NSMutableDictionary *_decorationViewFeed;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000de75fc
@property(retain, nonatomic) NSMutableDictionary *decorationViewFeed; // @synthesize decorationViewFeed=_decorationViewFeed;
- (void)_prepareDecorationFeedForKey:(id)arg1;	// IMP=0x0000000000de7549
- (void)reset;	// IMP=0x0000000000de7533
- (void)invalidateDecoration:(id)arg1;	// IMP=0x0000000000de742b
- (void)configureDecoration:(id)arg1;	// IMP=0x0000000000de72aa
- (id)init;	// IMP=0x0000000000de7244

@end
