//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (LSPluginSDKResolutionAdditions)
- (id)ls_resolvePlugInKitInfoPlistWithDictionary:(id)arg1;	// IMP=0x0090000000109a40
- (unsigned long long)ls_hashQuery;	// IMP=0x009000000010b7c7
- (id)ls_parseQueryForIdentifiers:(id)arg1;	// IMP=0x009000000010b4f0
- (unsigned long long)_LS_integerForKey:(id)arg1;	// IMP=0x009000000011ee5d
- (_Bool)_LS_BoolForKey:(id)arg1;	// IMP=0x009000000011edfe
- (id)_ls_normalizedPluginPlist;	// IMP=0x00900000001205da
- (id)ls_insertExtensionPointVersion:(id)arg1;	// IMP=0x009000000012026b
- (id)ls_fixupExtensionPointIdentifierKey;	// IMP=0x009000000011fdc4
@end
