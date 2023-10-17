//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface PDFairPlayCertificateOperation
{
    NSData *_certificate;	// 24 = 0x18
}

+ (id)defaultEndpointInfo;	// IMP=0x004000000006de70
+ (id)serviceID;	// IMP=0x001000000006de63
- (void).cxx_destruct;	// IMP=0x002000000006e450
@property(retain) NSData *certificate; // @synthesize certificate=_certificate;
- (void)flushCachedData;	// IMP=0x001000000006e3df
- (_Bool)processResponse:(id *)arg1;	// IMP=0x001000000006e1ff
- (id)requestData;	// IMP=0x001000000006e1f7
- (void)execute;	// IMP=0x001000000006e191
- (void)prepare;	// IMP=0x001000000006e112
- (void)handleExpiration;	// IMP=0x001000000006dfc3
- (id)acceptContentType;	// IMP=0x001000000006dfb6
- (id)requestContentType;	// IMP=0x001000000006dfae
- (id)httpMethod;	// IMP=0x001000000006dfa1
- (id)endpointIdentifier;	// IMP=0x001000000006df94
- (id)initWithDatabase:(id)arg1;	// IMP=0x001000000006df3f

@end
