//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface IDSServerCertificate : NSObject
{
    NSData *_dataRepresentation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000bf3f9
@property(readonly, nonatomic) NSData *dataRepresentation; // @synthesize dataRepresentation=_dataRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bf3e4
- (unsigned long long)hash;	// IMP=0x00000000000bf3a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bf2f3
- (id)description;	// IMP=0x00000000000bf25e
- (id)initWithDataRepresentation:(id)arg1;	// IMP=0x00000000000bf1eb

@end

