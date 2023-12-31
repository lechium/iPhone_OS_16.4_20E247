//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SQLiteConnection;

@interface SQLiteSchema : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000037d4e
- (void)_setUserVersion:(long long)arg1;	// IMP=0x0010000000037cec
- (_Bool)tableExists:(id)arg1;	// IMP=0x0010000000037bb7
- (_Bool)migrateToVersion:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000378b8
@property(readonly) long long currentUserVersion;
- (_Bool)column:(id)arg1 existsInTable:(id)arg2;	// IMP=0x00100000000375c1
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000037556

@end

