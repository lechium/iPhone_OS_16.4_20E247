//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOBatchRevGeocodeRequest : PBRequest
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_95bda58d _additionalPlaceTypes;	// 16 = 0x10
    NSString *_deviceCountryCode;	// 40 = 0x28
    NSString *_deviceSku;	// 48 = 0x30
    NSString *_displayRegion;	// 56 = 0x38
    NSMutableArray *_locations;	// 64 = 0x40
    NSMutableArray *_serviceTags;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    struct {
        unsigned int read_additionalPlaceTypes:1;
        unsigned int read_deviceCountryCode:1;
        unsigned int read_deviceSku:1;
        unsigned int read_displayRegion:1;
        unsigned int read_locations:1;
        unsigned int read_serviceTags:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 92 = 0x5c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0010000001100544
+ (Class)serviceTagType;	// IMP=0x00100000010fedef
+ (Class)locationType;	// IMP=0x00100000010fdecc
- (void).cxx_destruct;	// IMP=0x0000000001101bf6
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000011018e3
- (unsigned long long)hash;	// IMP=0x0000000001101818
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001101671
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011011c1
- (void)copyTo:(id)arg1;	// IMP=0x0000000001100f4d
- (Class)responseClass;	// IMP=0x0000000001100f3c
- (unsigned int)requestTypeCode;	// IMP=0x0000000001100f31
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000001100de0
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000001100cbb
- (void)writeTo:(id)arg1;	// IMP=0x00000000011008ed
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000011008e0
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000011002f9
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000011002e7
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000010ff76f
- (id)jsonRepresentation;	// IMP=0x00000000010ff760
- (id)dictionaryRepresentation;	// IMP=0x00000000010feeaf
- (id)description;	// IMP=0x00000000010fee00
- (id)serviceTagAtIndex:(unsigned long long)arg1;	// IMP=0x00000000010fedbe
- (unsigned long long)serviceTagsCount;	// IMP=0x00000000010fed92
- (void)addServiceTag:(id)arg1;	// IMP=0x00000000010fecde
- (void)clearServiceTags;	// IMP=0x00000000010fecb6
@property(retain, nonatomic) NSMutableArray *serviceTags;
@property(retain, nonatomic) NSString *deviceSku;
@property(readonly, nonatomic) _Bool hasDeviceSku;
@property(retain, nonatomic) NSString *displayRegion;
@property(readonly, nonatomic) _Bool hasDisplayRegion;
@property(retain, nonatomic) NSString *deviceCountryCode;
@property(readonly, nonatomic) _Bool hasDeviceCountryCode;
- (int)StringAsAdditionalPlaceTypes:(id)arg1;	// IMP=0x00000000010fe3d0
- (id)additionalPlaceTypesAsString:(int)arg1;	// IMP=0x00000000010fe143
- (void)setAdditionalPlaceTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000010fe121
- (int)additionalPlaceTypeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000010fe04b
- (void)addAdditionalPlaceType:(int)arg1;	// IMP=0x00000000010fe012
- (void)clearAdditionalPlaceTypes;	// IMP=0x00000000010fdff6
@property(readonly, nonatomic) int *additionalPlaceTypes;
@property(readonly, nonatomic) unsigned long long additionalPlaceTypesCount;
- (id)locationAtIndex:(unsigned long long)arg1;	// IMP=0x00000000010fde9b
- (unsigned long long)locationsCount;	// IMP=0x00000000010fde6f
- (void)addLocation:(id)arg1;	// IMP=0x00000000010fddbb
- (void)clearLocations;	// IMP=0x00000000010fdd93
@property(retain, nonatomic) NSMutableArray *locations;
- (void)dealloc;	// IMP=0x00000000010fd112
- (id)initWithData:(id)arg1;	// IMP=0x00000000010fd0b6
- (id)init;	// IMP=0x00000000010fd05a

@end

