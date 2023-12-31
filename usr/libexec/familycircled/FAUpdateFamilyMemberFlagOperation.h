//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AAGrandSlamSigner, NSNumber, NSString;

@interface FAUpdateFamilyMemberFlagOperation
{
    AAGrandSlamSigner *_grandSlamSigner;	// 8 = 0x8
    AAGrandSlamSigner *_familyGrandSlamSigner;	// 16 = 0x10
    _Bool _enabled;	// 24 = 0x18
    NSNumber *_dsid;	// 32 = 0x20
    NSString *_flag;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000000a448
@property(readonly) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, copy) NSString *flag; // @synthesize flag=_flag;
@property(readonly, copy) NSNumber *dsid; // @synthesize dsid=_dsid;
- (id);	// IMP=0x001000000000a387
- (id)_flagType;	// IMP=0x001000000000a304
- (void)_addBodyToRequest:(id)arg1;	// IMP=0x001000000000a218
- (void)_addHeadersToRequest:(id)arg1;	// IMP=0x001000000000a006
- (id)urlByAddingParamsToURL:(id)arg1;	// IMP=0x0010000000009e17
- (id)updateMemberFlag;	// IMP=0x0010000000009931
- (id)initWithNetworkService:(id)arg1 grandSlamSigner:(id)arg2 familyGrandSlamSigner:(id)arg3 memberDSID:(id)arg4 flag:(id)arg5 enabled:(_Bool)arg6;	// IMP=0x001000000000982d

@end

