//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OCPPackageProperties : NSObject
{
    NSString *mCreator;	// 8 = 0x8
    NSString *mDescription;	// 16 = 0x10
    NSString *mKeywords;	// 24 = 0x18
    NSString *mTitle;	// 32 = 0x20
    NSString *mAppVersion;	// 40 = 0x28
    NSString *mSubject;	// 48 = 0x30
    NSString *mCompany;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000036f180
@property(retain) NSString *company; // @synthesize company=mCompany;
@property(retain) NSString *subject; // @synthesize subject=mSubject;
- (id)appVersion;	// IMP=0x000000000036f12c
- (id)title;	// IMP=0x00000000001b6935
- (id)keywords;	// IMP=0x00000000001b6951
- (id)description;	// IMP=0x00000000001b695f
- (id)creator;	// IMP=0x00000000001b6943
- (id)initWithCoreXml:(struct _xmlDoc *)arg1 appXml:(struct _xmlDoc *)arg2;	// IMP=0x000000000036f1df
- (void)readFromCoreXml:(struct _xmlDoc *)arg1 appXml:(struct _xmlDoc *)arg2;	// IMP=0x000000000036f75e
- (void)readFromAppXml:(struct _xmlDoc *)arg1;	// IMP=0x000000000036f5a4
- (void)readFromCoreXml:(struct _xmlDoc *)arg1;	// IMP=0x000000000036f24b

@end
