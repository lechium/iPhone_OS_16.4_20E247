//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXReference : NSObject
{
}

+ (id)xmlRangesFromDiscontinuousReferences:(id)arg1;	// IMP=0x00800000003b6b5e
+ (id)edDiscontinousReferencesFromXmlRanges:(id)arg1;	// IMP=0x00800000003b69ba
+ (id)edReferenceFromXmlReference:(id)arg1;	// IMP=0x00800000001bfabf
+ (id)xmlReferenceFromEDReference:(id)arg1;	// IMP=0x00800000003b6936
+ (id)xmlReferenceFromAreaReference:(struct EDAreaReference *)arg1;	// IMP=0x00800000003b6708
+ (_Bool)edAreaReferenceFromXmlReference:(id)arg1 areaReference:(struct EDAreaReference *)arg2;	// IMP=0x00800000001bfb48
+ (id)numberToStringBase26:(int)arg1;	// IMP=0x00800000003b6ccb

@end
