//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface RMManagementSettings : NSObject
{
    NSObject *_settingsLock;	// 8 = 0x8
    NSURL *_settingsURL;	// 16 = 0x10
    NSMutableDictionary *_cachedSettings;	// 24 = 0x18
}

+ (void)reset;	// IMP=0x0020000000050d60
+ (id)sharedSettings;	// IMP=0x0010000000050c94
- (void).cxx_destruct;	// IMP=0x0020000000051649
@property(retain, nonatomic) NSMutableDictionary *cachedSettings; // @synthesize cachedSettings=_cachedSettings;
@property(retain, nonatomic) NSURL *settingsURL; // @synthesize settingsURL=_settingsURL;
- (void)_writeCachedSettings;	// IMP=0x00100000000514a4
- (void)_readCachedSettings;	// IMP=0x001000000005112d
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000051052
- (void)removeValueForKey:(id)arg1;	// IMP=0x0010000000050f93
- (id)valueForKey:(id)arg1;	// IMP=0x0010000000050ecd
- (id)initWithURL:(id)arg1;	// IMP=0x0010000000050e48

@end
