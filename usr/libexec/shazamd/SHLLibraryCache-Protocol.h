//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol SHLSyncSessionTask;

@protocol SHLLibraryCache <NSObject>
@property(readonly, nonatomic) _Bool needsMigration;
- (_Bool)resetWithError:(id *)arg1;
- (_Bool)migrateWithError:(id *)arg1;
- (id <SHLSyncSessionTask>)taskOfType:(long long)arg1 identifier:(NSString *)arg2;
- (NSArray *)tasksOfType:(long long)arg1;
- (void)removeAllTasksOfType:(long long)arg1;
- (_Bool)removeTaskOfType:(long long)arg1 forIdentifier:(NSString *)arg2 error:(id *)arg3;
- (_Bool)storeTask:(id <SHLSyncSessionTask>)arg1 ofType:(long long)arg2 error:(id *)arg3;
@end
