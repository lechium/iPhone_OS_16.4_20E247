//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSUUID;

@interface IPCLaneGuidanceInfoReply
{
    _Bool _isForManeuver;	// 8 = 0x8
    NSUUID *_laneInfoId;	// 16 = 0x10
    NSArray *_lanes;	// 24 = 0x18
    NSArray *_textAlternatives;	// 32 = 0x20
    NSArray *_midStepTitles;	// 40 = 0x28
}

+ (id)ipcReplyForLaneGuidanceInfo:(id)arg1;	// IMP=0x002000000003fdbe
- (void).cxx_destruct;	// IMP=0x0010000000015281
@property(copy, nonatomic) NSArray *midStepTitles; // @synthesize midStepTitles=_midStepTitles;
@property(copy, nonatomic) NSArray *textAlternatives; // @synthesize textAlternatives=_textAlternatives;
@property(nonatomic) _Bool isForManeuver; // @synthesize isForManeuver=_isForManeuver;
@property(copy, nonatomic) NSArray *lanes; // @synthesize lanes=_lanes;
@property(copy, nonatomic) NSUUID *laneInfoId; // @synthesize laneInfoId=_laneInfoId;
- (id)description;	// IMP=0x001000000001509a
- (id)dictionaryValue;	// IMP=0x0010000000014e0e
- (id)initWithDictionary:(id)arg1;	// IMP=0x0010000000014b9b
- (id)laneGuidanceInfo;	// IMP=0x001000000003fee9

@end

