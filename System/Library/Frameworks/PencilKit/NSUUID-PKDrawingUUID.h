//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@class NSData, NSString;

@interface NSUUID (PKDrawingUUID)
+ (id)PK_zero;	// IMP=0x001000000009ed9a
@property(readonly, copy) NSData *AES128Key;
@property(readonly, copy) NSString *uniqueCacheFilePath;
- (id)PK_shortDescription;	// IMP=0x001000000009eea8
- (long long)PK_compare:(id)arg1;	// IMP=0x001000000009ee06

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

