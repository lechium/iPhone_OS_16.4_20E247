//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDateFormatter, NSString;

@interface BMStreamCRDTLocation : NSObject
{
    NSDateFormatter *_dateFormatter;	// 8 = 0x8
    NSString *_streamName;	// 16 = 0x10
    NSString *_siteIdentifier;	// 24 = 0x18
    NSDate *_day;	// 32 = 0x20
}

+ (id)dayFromRecordName:(id)arg1;	// IMP=0x0040000000042833
+ (id)recordNameFromSite:(id)arg1 day:(id)arg2;	// IMP=0x0010000000042502
- (void).cxx_destruct;	// IMP=0x0010000000043147
// Error: Property attributes should begin with the type ('T') attribute, property name: day
// Property attributes: (null)

@property(readonly, nonatomic) NSString *siteIdentifier; // @synthesize siteIdentifier=_siteIdentifier;
@property(readonly, nonatomic) NSString *streamName; // @synthesize streamName=_streamName;
- (id)expirationTimeForStreamDesc:(id)arg1;	// IMP=0x0010000000042f22
- (id)ckMergeableValueIDWithFormatVersion:(unsigned long long)arg1;	// IMP=0x0010000000042d26
- (id)ckMergeableValueID;	// IMP=0x0010000000042d12
- (id)initWithCKMergeableValueID:(id)arg1 streamName:(id)arg2;	// IMP=0x00100000000429be
- (id)initWithCKMergeableValueID:(id)arg1;	// IMP=0x00100000000429aa
- (id)initWithZoneName:(id)arg1 recordName:(id)arg2;	// IMP=0x0010000000042908
- (id)initWithTriple:(id)arg1;	// IMP=0x0010000000042636
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000004262b
- (id)recordName;	// IMP=0x0010000000042607
- (id)triple;	// IMP=0x0010000000042423
- (id)description;	// IMP=0x00100000000423db
- (unsigned long long)hash;	// IMP=0x0010000000042381
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000042274
- (id)initWithStreamName:(id)arg1 siteIdentifier:(id)arg2 day:(id)arg3;	// IMP=0x00100000000420d6
- (id)dictionaryRepresentation;	// IMP=0x001000000003755a
- (id)initFromDictionary:(id)arg1;	// IMP=0x001000000003748f

@end
