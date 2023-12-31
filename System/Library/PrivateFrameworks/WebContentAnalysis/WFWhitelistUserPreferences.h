//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WFWhitelistSiteBuffer;

__attribute__((visibility("hidden")))
@interface WFWhitelistUserPreferences : NSObject
{
    WFWhitelistSiteBuffer *filterWhitelist;	// 8 = 0x8
    WFWhitelistSiteBuffer *filterBlacklist;	// 16 = 0x10
    WFWhitelistSiteBuffer *webWhitelist;	// 24 = 0x18
    _Bool filterEnabled;	// 32 = 0x20
    _Bool whitelistEnabled;	// 33 = 0x21
    _Bool alwaysAllowHTTPS;	// 34 = 0x22
    NSString *username;	// 40 = 0x28
}

+ (id)defaultWhitelistForUser:(id)arg1;	// IMP=0x0060000000008e8e
+ (id)_cachedWhitelistForPath:(id)arg1 username:(id)arg2;	// IMP=0x0060000000008d11
+ (id)_modificationDateForFileAtPath:(id)arg1;	// IMP=0x0060000000008c93
+ (id)whitelistForUser:(id)arg1;	// IMP=0x0060000000008c33
+ (id)whitelistWithPreferences:(id)arg1;	// IMP=0x0060000000008bfc
+ (_Bool)_isURLMetasite:(id)arg1;	// IMP=0x00600000000089fe
+ (id)_sharedMetasiteDomainNamesDictionary;	// IMP=0x00600000000089a8
+ (id)_sharedMetasiteExceptionsDomainNamesArray;	// IMP=0x0060000000008922
+ (id)_metasiteDomainNamesArray;	// IMP=0x00600000000088bc
+ (id)_arrayByConvertingLinesInStringsAtPath:(id)arg1;	// IMP=0x00600000000086a5
+ (id)metasitesExceptionPath;	// IMP=0x006000000000865a
+ (id)metasitesPath;	// IMP=0x006000000000860f
+ (id)preferencesPathForUsername:(id)arg1;	// IMP=0x00600000000085e1
@property(readonly) WFWhitelistSiteBuffer *webWhitelist; // @synthesize webWhitelist;
@property(readonly) WFWhitelistSiteBuffer *filterBlacklist; // @synthesize filterBlacklist;
@property(readonly) WFWhitelistSiteBuffer *filterWhitelist; // @synthesize filterWhitelist;
@property(retain) NSString *username; // @synthesize username;
@property _Bool alwaysAllowHTTPS; // @synthesize alwaysAllowHTTPS;
@property _Bool whitelistEnabled; // @synthesize whitelistEnabled;
@property _Bool filterEnabled; // @synthesize filterEnabled;
- (id)description;	// IMP=0x0000000000009b09
- (_Bool)isURL:(id)arg1 onList:(id)arg2;	// IMP=0x00000000000099ce
- (id)pronounceOnPageURLString:(id)arg1 shouldFilter:(_Bool *)arg2;	// IMP=0x00000000000098ad
- (_Bool)isURLAllowed:(id)arg1 reason:(id *)arg2 shouldFilter:(_Bool *)arg3 foundOnList:(_Bool *)arg4;	// IMP=0x00000000000095e7
- (_Bool)isURLAllowed:(id)arg1;	// IMP=0x00000000000095cd
- (void)dealloc;	// IMP=0x0000000000009575
- (id)initWithPreferences:(id)arg1;	// IMP=0x0000000000009088
- (id)init;	// IMP=0x0000000000008fe1

@end

