//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@protocol NARWorkspaceService <NSObject>
- (oneway void)getWorkspaceInfoIncludingHiddenApps:(_Bool)arg1 completion:(void (^)(NARWorkspaceInfo *))arg2;
- (oneway void)getWorkspaceInfoWithCompletion:(void (^)(NARWorkspaceInfo *))arg1;
@end
