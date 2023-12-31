//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDateComponentsFormatter, NSMutableDictionary, NSNumberFormatter;

__attribute__((visibility("hidden")))
@interface VUIMediaTagsViewHelper : NSObject
{
    NSMutableDictionary *_tagsViewDictionary;	// 8 = 0x8
    NSDateComponentsFormatter *_dateComponentFormatter;	// 16 = 0x10
    NSNumberFormatter *_tomatoPercentFormatter;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000016aae
- (id)_commonSenseString:(id)arg1;	// IMP=0x00000000000169f4
- (void)_mediaBagdesWithVUIMediaEntity:(id)arg1;	// IMP=0x000000000001658d
- (id)_durationDescriptionFromDuration:(id)arg1;	// IMP=0x00000000000164d3
- (id)_releaseDateDescriptionFromDate:(id)arg1;	// IMP=0x0000000000016420
- (_Bool)_isValidNumber:(id)arg1;	// IMP=0x0000000000016391
- (void)addSeperatorKey:(id)arg1;	// IMP=0x0000000000016371
- (id)tagsViewDictionary;	// IMP=0x0000000000016353
- (id)initWithVUIMediaEntity:(id)arg1;	// IMP=0x0000000000016024
- (id)initWithVUIMediaItem:(id)arg1;	// IMP=0x0000000000015e69
- (id)initWithContentMetadata:(id)arg1 additionalMetadata:(id)arg2;	// IMP=0x0000000000014a6a

@end

