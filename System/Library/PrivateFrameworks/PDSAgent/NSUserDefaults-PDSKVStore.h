//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserDefaults.h>

@class NSString;

@interface NSUserDefaults (PDSKVStore)
- (id)allStoredValues;	// IMP=0x002000000001b4c3
- (void)setString:(id)arg1 forKey:(id)arg2;	// IMP=0x002000000001b4b1
- (void)setNumber:(id)arg1 forKey:(id)arg2;	// IMP=0x002000000001b49f
- (void)setData:(id)arg1 forKey:(id)arg2;	// IMP=0x002000000001b48d
- (id)numberForKey:(id)arg1;	// IMP=0x002000000001b42d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
