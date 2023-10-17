//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/NSFileProviderManager.h>

@interface NSFileProviderManager (BRAdditions)
+ (id)_br_createNSFileProviderManagerForDataSeparated:(_Bool)arg1 withDomainID:(id)arg2 didMatchedDomain:(_Bool *)arg3;	// IMP=0x00600000000f42ad
+ (id)br_getLegacyEnterpriseProviderManager;	// IMP=0x00600000000f427b
+ (id)br_getEnterpriseProviderManager;	// IMP=0x00600000000f425f
+ (id)br_sharedProviderManagerWithDomainID:(id)arg1;	// IMP=0x00600000000f4089
+ (id)br_sharedProviderManager;	// IMP=0x00600000000f402b
+ (id)br_getDomainForProvider:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00600000000f3c84
+ (id)br_getDomainForDataSeparated:(_Bool)arg1 withIdentifier:(id)arg2;	// IMP=0x00600000000f3bed
+ (id)br_getDomainForCurrentPersona;	// IMP=0x00600000000f3b51
- (void)br_removeDomain:(id)arg1 options:(long long)arg2 sync:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000f440f
- (void)br_removeDomain:(id)arg1 sync:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f4360
@end
