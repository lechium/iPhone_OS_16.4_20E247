//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TCBundleResourceManager : NSObject
{
    NSMutableDictionary *mPackageMap;	// 8 = 0x8
}

+ (void)disposeInstance;	// IMP=0x00600000002d18c3
+ (id)instance;	// IMP=0x00600000002d182d
- (void).cxx_destruct;	// IMP=0x00000000002d1d00
- (struct _xmlDoc *)xmlDocumentForResource:(id)arg1 ofType:(id)arg2 inPackage:(id)arg3 cacheResult:(_Bool)arg4;	// IMP=0x00000000002d1b47
- (id)dataForResource:(id)arg1 ofType:(id)arg2 inPackage:(id)arg3 cacheResult:(_Bool)arg4;	// IMP=0x00000000002d1982
- (id)init;	// IMP=0x00000000002d190e
- (id)packageWithName:(id)arg1 cacheResult:(_Bool)arg2;	// IMP=0x00000000002d1d10

@end

