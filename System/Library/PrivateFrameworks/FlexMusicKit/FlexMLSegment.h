//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FlexMLSegment : NSObject
{
    NSArray *_gainFunction;	// 8 = 0x8
    CDStruct_1b6d18a9 _duration;	// 16 = 0x10
    CDStruct_1b6d18a9 _trackTime;	// 40 = 0x28
    CDStruct_1b6d18a9 _summaryTime;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000016813
@property(readonly, nonatomic) NSArray *gainFunction; // @synthesize gainFunction=_gainFunction;
@property(readonly, nonatomic) CDStruct_1b6d18a9 summaryTime; // @synthesize summaryTime=_summaryTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 trackTime; // @synthesize trackTime=_trackTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
- (id)initWithDuration:(CDStruct_1b6d18a9)arg1 trackTime:(CDStruct_1b6d18a9)arg2 summaryTime:(CDStruct_1b6d18a9)arg3 gainFunction:(id)arg4;	// IMP=0x000000000001671d

@end
