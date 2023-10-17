//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoreTelephonyClient, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PSUICarrierServicesSpecifierCache : NSObject
{
    CoreTelephonyClient *_client;	// 8 = 0x8
    NSMutableDictionary *_specifiersDict;	// 16 = 0x10
    NSMutableDictionary *_mmsInfoSpecifiersDict;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x001000000000b6ff
- (void).cxx_destruct;	// IMP=0x000000000000cf3f
@property(retain, nonatomic) NSMutableDictionary *mmsInfoSpecifiersDict; // @synthesize mmsInfoSpecifiersDict=_mmsInfoSpecifiersDict;
@property(retain, nonatomic) NSMutableDictionary *specifiersDict; // @synthesize specifiersDict=_specifiersDict;
@property(retain, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
- (id)getLogger;	// IMP=0x000000000000cece
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;	// IMP=0x000000000000ce3c
- (void)carrierBundleChange:(id)arg1;	// IMP=0x000000000000cdc4
- (void)openURLWithSpecifier:(id)arg1;	// IMP=0x000000000000cd16
- (void)dialCarrierServiceNumber:(id)arg1;	// IMP=0x000000000000c9d2
- (id)readPreference:(id)arg1;	// IMP=0x000000000000c9b3
- (id)specifiers:(id)arg1;	// IMP=0x000000000000c887
- (void)fetchSpecifiers;	// IMP=0x000000000000be16
- (id)newMMSInfoSpecifierWithTarget:(id)arg1 context:(id)arg2;	// IMP=0x000000000000bc9a
- (id)mmsInfoSpecifierWithTarget:(id)arg1 context:(id)arg2;	// IMP=0x000000000000bac3
- (void)clearCache;	// IMP=0x000000000000ba37
- (void)dealloc;	// IMP=0x000000000000b9ae
- (id)init;	// IMP=0x000000000000b8ff
- (id)initPrivate;	// IMP=0x000000000000b764

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
