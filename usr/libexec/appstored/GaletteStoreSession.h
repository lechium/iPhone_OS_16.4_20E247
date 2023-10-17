//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SQLiteConnection;

@interface GaletteStoreSession : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001c44cb
@property(readonly) SQLiteConnection *connection; // @synthesize connection=_connection;
- (id)appForBundleID:(id)arg1;	// IMP=0x00100000001c42e2
- (long long)modeForBundleID:(id)arg1;	// IMP=0x00100000001c4161
- (_Bool)needsThirdPartyPurchaseConfirmationWithBundleID:(id)arg1;	// IMP=0x00100000001c3ff2
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000001c3f9d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
