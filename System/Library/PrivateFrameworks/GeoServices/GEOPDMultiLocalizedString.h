//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMultiLocalizedString : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_localizedStrings;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000584aac
- (unsigned long long)hash;	// IMP=0x0000000000584a8f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005849f5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000584835
- (void)writeTo:(id)arg1;	// IMP=0x00000000005846d6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005846c7
- (id)jsonRepresentation;	// IMP=0x000000000058434a
- (id)dictionaryRepresentation;	// IMP=0x0000000000583fa7
- (id)description;	// IMP=0x0000000000583ef8
- (id)bestLocalizedName;	// IMP=0x0000000000a75e33

@end
