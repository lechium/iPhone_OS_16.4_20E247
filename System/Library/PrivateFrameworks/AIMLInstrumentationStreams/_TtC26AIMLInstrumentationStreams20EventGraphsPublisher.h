//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomePubSub/BMBookmarkablePublisher.h>

@class MISSING_TYPE, NSArray;

@interface _TtC26AIMLInstrumentationStreams20EventGraphsPublisher : BMBookmarkablePublisher
{
    MISSING_TYPE *windowLength;	// 8 = 0x8
    MISSING_TYPE *upstream;	// 16 = 0x10
    MISSING_TYPE *inner;	// 24 = 0x18
    MISSING_TYPE *logger;	// 0 = 0x0
}

+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;	// IMP=0x006000000001c500
- (void).cxx_destruct;	// IMP=0x000000000001e360
- (id)init;	// IMP=0x000000000001e2e0
@property(nonatomic, readonly) NSArray *bookmarkableUpstreams;
- (void)subscribe:(id)arg1;	// IMP=0x000000000001c3b0

@end
