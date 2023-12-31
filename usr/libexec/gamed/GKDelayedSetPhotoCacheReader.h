//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKDatabaseConnection, NSString;

@interface GKDelayedSetPhotoCacheReader : NSObject
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
}

+ (id)readerWithDatabaseConnection:(id)arg1;	// IMP=0x0020000000109d52
- (void).cxx_destruct;	// IMP=0x002000000010a936
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)readResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000010a0f3
- (id)setPhotoDescriptorForExecutedStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x0010000000109ee6
- (void)bindParametersForStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2;	// IMP=0x0010000000109ece
- (id)setPhotoDescriptorStatement;	// IMP=0x0010000000109e51
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (id)initWithDatabaseConnection:(id)arg1;	// IMP=0x0010000000109daf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

