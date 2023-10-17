//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SYLogMultiSuspendableQueueState : PBCodable
{
    NSString *_label;	// 8 = 0x8
    int _resumeCount;	// 16 = 0x10
    NSString *_target;	// 24 = 0x18
    struct {
        unsigned int resumeCount:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000095bbc
@property(retain, nonatomic) NSString *target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) int resumeCount; // @synthesize resumeCount=_resumeCount;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000095adf
- (unsigned long long)hash;	// IMP=0x0000000000095a5f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009596a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000958a9
- (void)copyTo:(id)arg1;	// IMP=0x0000000000095826
- (void)writeTo:(id)arg1;	// IMP=0x00000000000957a5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000095798
- (id)dictionaryRepresentation;	// IMP=0x000000000009547d
- (id)description;	// IMP=0x00000000000953ce
@property(readonly, nonatomic) _Bool hasTarget;
@property(readonly, nonatomic) _Bool hasLabel;
@property(nonatomic) _Bool hasResumeCount;

@end
