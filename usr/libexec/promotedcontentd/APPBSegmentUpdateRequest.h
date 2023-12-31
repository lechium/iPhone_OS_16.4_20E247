//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface APPBSegmentUpdateRequest : PBRequest
{
    CDStruct_95bda58d _accountStates;	// 8 = 0x8
    CDStruct_95bda58d _accountTypes;	// 32 = 0x20
    CDStruct_95bda58d _deviceModes;	// 56 = 0x38
    double _iTunesRefreshTime;	// 80 = 0x50
    double _updateSentTime;	// 88 = 0x58
    NSString *_advertisingIdentifier;	// 96 = 0x60
    int _advertisingIdentifierMonthResetCount;	// 104 = 0x68
    NSData *_dPID;	// 112 = 0x70
    NSData *_iAdID;	// 120 = 0x78
    NSString *_localeIdentifier;	// 128 = 0x80
    NSString *_osVersionAndBuild;	// 136 = 0x88
    NSString *_segmentInfo;	// 144 = 0x90
    float _timezone;	// 152 = 0x98
    _Bool _isFirstPartyIdentifier;	// 156 = 0x9c
    struct {
        unsigned int iTunesRefreshTime:1;
        unsigned int updateSentTime:1;
        unsigned int advertisingIdentifierMonthResetCount:1;
        unsigned int timezone:1;
        unsigned int isFirstPartyIdentifier:1;
    } _has;	// 160 = 0xa0
}

+ (id)options;	// IMP=0x0020000000087f82
- (void).cxx_destruct;	// IMP=0x002000000008a943
@property(retain, nonatomic) NSData *dPID; // @synthesize dPID=_dPID;
@property(retain, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(retain, nonatomic) NSString *osVersionAndBuild; // @synthesize osVersionAndBuild=_osVersionAndBuild;
@property(nonatomic) int advertisingIdentifierMonthResetCount; // @synthesize advertisingIdentifierMonthResetCount=_advertisingIdentifierMonthResetCount;
@property(nonatomic) float timezone; // @synthesize timezone=_timezone;
@property(nonatomic) double updateSentTime; // @synthesize updateSentTime=_updateSentTime;
@property(nonatomic) double iTunesRefreshTime; // @synthesize iTunesRefreshTime=_iTunesRefreshTime;
@property(retain, nonatomic) NSString *advertisingIdentifier; // @synthesize advertisingIdentifier=_advertisingIdentifier;
@property(nonatomic) _Bool isFirstPartyIdentifier; // @synthesize isFirstPartyIdentifier=_isFirstPartyIdentifier;
@property(retain, nonatomic) NSString *segmentInfo; // @synthesize segmentInfo=_segmentInfo;
@property(retain, nonatomic) NSData *iAdID; // @synthesize iAdID=_iAdID;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000008a58f
- (unsigned long long)hash;	// IMP=0x001000000008a16e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000089e6f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000089c54
- (void)copyTo:(id)arg1;	// IMP=0x001000000008996c
- (void)writeTo:(id)arg1;	// IMP=0x0010000000089759
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000008974c
- (id)dictionaryRepresentation;	// IMP=0x001000000008890b
- (id)description;	// IMP=0x001000000008885c
- (int)StringAsAccountStates:(id)arg1;	// IMP=0x00100000000887ca
- (id)accountStatesAsString:(int)arg1;	// IMP=0x0010000000088781
- (void)setAccountStates:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x001000000008876a
- (int)accountStateAtIndex:(unsigned long long)arg1;	// IMP=0x001000000008869d
- (void)addAccountState:(int)arg1;	// IMP=0x001000000008868a
- (void)clearAccountStates;	// IMP=0x0010000000088679
@property(readonly, nonatomic) int *accountStates;
@property(readonly, nonatomic) unsigned long long accountStatesCount;
- (int)StringAsAccountTypes:(id)arg1;	// IMP=0x001000000008853f
- (id)accountTypesAsString:(int)arg1;	// IMP=0x00100000000884f6
- (void)setAccountTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00100000000884df
- (int)accountTypeAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000088412
- (void)addAccountType:(int)arg1;	// IMP=0x00100000000883ff
- (void)clearAccountTypes;	// IMP=0x00100000000883ee
@property(readonly, nonatomic) int *accountTypes;
@property(readonly, nonatomic) unsigned long long accountTypesCount;
- (int)StringAsDeviceModes:(id)arg1;	// IMP=0x0010000000088339
- (id)deviceModesAsString:(int)arg1;	// IMP=0x00100000000882f0
- (void)setDeviceModes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00100000000882d9
- (int)deviceModeAtIndex:(unsigned long long)arg1;	// IMP=0x001000000008820c
- (void)addDeviceMode:(int)arg1;	// IMP=0x00100000000881f9
- (void)clearDeviceModes;	// IMP=0x00100000000881e8
@property(readonly, nonatomic) int *deviceModes;
@property(readonly, nonatomic) unsigned long long deviceModesCount;
@property(readonly, nonatomic) _Bool hasDPID;
@property(readonly, nonatomic) _Bool hasLocaleIdentifier;
@property(readonly, nonatomic) _Bool hasOsVersionAndBuild;
@property(nonatomic) _Bool hasAdvertisingIdentifierMonthResetCount;
@property(nonatomic) _Bool hasTimezone;
@property(nonatomic) _Bool hasUpdateSentTime;
@property(nonatomic) _Bool hasITunesRefreshTime;
@property(readonly, nonatomic) _Bool hasAdvertisingIdentifier;
@property(nonatomic) _Bool hasIsFirstPartyIdentifier;
@property(readonly, nonatomic) _Bool hasSegmentInfo;
@property(readonly, nonatomic) _Bool hasIAdID;
- (void)dealloc;	// IMP=0x0010000000087f24

@end

