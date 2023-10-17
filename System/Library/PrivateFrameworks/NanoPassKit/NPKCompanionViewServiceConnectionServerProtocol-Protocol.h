//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoPassKit/PDXPCServiceExportedInterface-Protocol.h>

@class CNContact, NPKRemotePassActionEnterValueRequest, NPKRemotePassActionSelectItemRequest;

@protocol NPKCompanionViewServiceConnectionServerProtocol <PDXPCServiceExportedInterface>
- (void)presentRemotePassItemSelectionViewControllerForRequest:(NPKRemotePassActionSelectItemRequest *)arg1 contact:(CNContact *)arg2 completion:(void (^)(_Bool))arg3;
- (void)presentRemotePassValueEntryViewControllerForRequest:(NPKRemotePassActionEnterValueRequest *)arg1 contact:(CNContact *)arg2 completion:(void (^)(_Bool))arg3;
@end
