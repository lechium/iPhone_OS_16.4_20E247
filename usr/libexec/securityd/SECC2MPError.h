//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SECC2MPError : PBCodable
{
    long long _errorCode;	// 8 = 0x8
    NSString *_errorDescription;	// 16 = 0x10
    NSString *_errorDomain;	// 24 = 0x18
    SECC2MPError *_underlyingError;	// 32 = 0x20
    struct {
        unsigned int errorCode:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000159b77
@property(retain, nonatomic) SECC2MPError *underlyingError; // @synthesize underlyingError=_underlyingError;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000159a39
- (unsigned long long)hash;	// IMP=0x00100000001599a5
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000015987c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000159794
- (void)copyTo:(id)arg1;	// IMP=0x00100000001596f0
- (void)writeTo:(id)arg1;	// IMP=0x0010000000159651
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000159644
- (id)dictionaryRepresentation;	// IMP=0x0010000000159512
- (id)description;	// IMP=0x0010000000159463
@property(readonly, nonatomic) _Bool hasUnderlyingError;
@property(readonly, nonatomic) _Bool hasErrorDescription;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasErrorDomain;

@end

