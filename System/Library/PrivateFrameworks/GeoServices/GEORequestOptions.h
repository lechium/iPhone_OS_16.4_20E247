//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSMutableArray, PBUnknownFields;
@protocol GEOSurchargeType;

__attribute__((visibility("hidden")))
@interface GEORequestOptions : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_requestOptions;	// 16 = 0x10
    int _optionUsed;	// 24 = 0x18
    struct {
        unsigned int has_optionUsed:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000950d20
- (unsigned long long)hash;	// IMP=0x00000000009509fb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000095093a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000095075c
- (void)writeTo:(id)arg1;	// IMP=0x00000000009505d8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000009505c9
- (id)jsonRepresentation;	// IMP=0x000000000094fc31
- (id)dictionaryRepresentation;	// IMP=0x000000000094f820
- (id)description;	// IMP=0x000000000094f771
@property(readonly, nonatomic) id <GEOSurchargeType> selectedSurchargeType;
@property(readonly, nonatomic) unsigned long long selectedSurchargeTypeIndex;
@property(readonly, nonatomic) NSArray *surchargeTypes;

@end

