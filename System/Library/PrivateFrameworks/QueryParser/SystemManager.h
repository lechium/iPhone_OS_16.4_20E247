//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SystemManager : NSObject
{
    int _newNotifyToken;	// 8 = 0x8
    int _updatedNotifyToken;	// 12 = 0xc
    _Bool _locked_hasUpdatedResources;	// 16 = 0x10
    _Bool _locked_hasUpdatedLocale;	// 17 = 0x11
    struct __CFLocale *_locked_currentLocale;	// 24 = 0x18
    struct __CFArray *_locked_currentPreferredLanguages;	// 32 = 0x20
    NSMutableDictionary *_locked_requiredAssets;	// 40 = 0x28
    NSMutableDictionary *_locked_optionalAssets;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_assetsQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_resourcesQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_localeQueue;	// 72 = 0x48
}

+ (id)defaultManager;	// IMP=0x0060000000058a75
- (void)enumerateResourcesForLocale:(id)arg1 contentType:(id)arg2 contentName:(id)arg3 isUpdate:(_Bool)arg4 usingBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000005a8f7
- (void)updateAssetsForLocale:(id)arg1 contentType:(id)arg2 contentName:(id)arg3 resourceType:(unsigned int)arg4;	// IMP=0x000000000005a57d
- (void)lockedUpdateAssets;	// IMP=0x000000000005917c
- (void)_updateLocale;	// IMP=0x00000000000590c3
- (struct __CFArray *)copyCurrentPreferredLanguages;	// IMP=0x0000000000058ff3
- (struct __CFLocale *)copyCurrentLocale;	// IMP=0x0000000000058f23
- (_Bool)hasResourcesForLocale:(id)arg1 contentType:(id)arg2 contentName:(id)arg3 resourceType:(unsigned int)arg4;	// IMP=0x0000000000058c69
- (_Bool)hasUpdatedResources;	// IMP=0x0000000000058bc3
- (_Bool)hasUpdatedLocale;	// IMP=0x0000000000058aba
- (void)dealloc;	// IMP=0x0000000000058986
- (id)init;	// IMP=0x00000000000587c0

@end
