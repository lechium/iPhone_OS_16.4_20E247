//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/NSFileProviderManager.h>

@interface NSFileProviderManager (BRAdditions)
+ (id)_br_createNSFileProviderManagerForDataSeparated:(_Bool)arg1 withDomainID:(id)arg2 didMatchedDomain:(_Bool *)arg3;	// IMP=0x006000000011f06c
+ (id)br_getLegacyEnterpriseProviderManager;	// IMP=0x006000000011f03a
+ (id)br_getEnterpriseProviderManager;	// IMP=0x006000000011f01e
+ (id)br_sharedProviderManagerWithDomainID:(id)arg1;	// IMP=0x006000000011edf4
+ (id)br_sharedProviderManager;	// IMP=0x006000000011ed96
+ (id)br_getDomainForProvider:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x006000000011e9ef
+ (id)br_getDomainForDataSeparated:(_Bool)arg1 withIdentifier:(id)arg2;	// IMP=0x006000000011e958
+ (id)br_getDomainForCurrentPersona;	// IMP=0x006000000011e8bc
- (void)br_removeDomain:(id)arg1 options:(long long)arg2 sync:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000011f1ba
- (void)br_removeDomain:(id)arg1 sync:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000011f10b
@end

