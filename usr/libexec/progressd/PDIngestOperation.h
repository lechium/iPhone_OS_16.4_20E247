//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PDIngestOperation
{
}

+ (id)serviceID;	// IMP=0x00400000000f6c5c
- (_Bool)processResponseObject:(id)arg1 error:(id *)arg2;	// IMP=0x00400000000f7a0d
- (id)requestData;	// IMP=0x00100000000f6da5
- (void)prepare;	// IMP=0x00100000000f6d2b
- (_Bool)wantsToExecute;	// IMP=0x00100000000f6cb5
- (Class)expectedResponseClass;	// IMP=0x00100000000f6ca4
- (id)acceptContentType;	// IMP=0x00100000000f6c97
- (id)requestContentType;	// IMP=0x00100000000f6c8a
- (id)endpointIdentifier;	// IMP=0x00100000000f6c7d
- (id)logSubsystem;	// IMP=0x00100000000f6c69

@end

