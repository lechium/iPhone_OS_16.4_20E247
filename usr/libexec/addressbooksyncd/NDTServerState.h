//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NDTSQFile, NDTSQKeyValueStore, NSString;

@interface NDTServerState : NSObject
{
    NSString *_path;	// 8 = 0x8
    NDTSQKeyValueStore *_store;	// 16 = 0x10
    NDTSQFile *_file;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000014ce1
- (void)deleteKey:(id)arg1;	// IMP=0x0010000000014c8d
- (_Bool)getBoolValueForKey:(id)arg1 default:(_Bool)arg2;	// IMP=0x0010000000014c28
- (void)setBoolValue:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0010000000014bcf
- (double)getDoubleValueForKey:(id)arg1 default:(double)arg2;	// IMP=0x0010000000014b66
- (void)setDoubleValue:(double)arg1 forKey:(id)arg2;	// IMP=0x0010000000014b08
- (long long)getIntegerValueForKey:(id)arg1 default:(long long)arg2;	// IMP=0x0010000000014aa8
- (void)setIntegerValue:(long long)arg1 forKey:(id)arg2;	// IMP=0x0010000000014a4f
- (id)getStringValueForKey:(id)arg1 default:(id)arg2;	// IMP=0x00100000000149c3
- (void)setStringValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000001494c
- (void)_migrateFrom:(id)arg1 to:(id)arg2;	// IMP=0x00100000000146d8
- (id)initWithPath:(id)arg1;	// IMP=0x00100000000144d5

@end

