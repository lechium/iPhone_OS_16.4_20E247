//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class NSSet, WFActionProvider;

@protocol WFActionProviderDelegate <NSObject>
- (void)actionProviderDidChange:(WFActionProvider *)arg1 updatedActions:(NSSet *)arg2 removedActions:(NSSet *)arg3 addedActions:(NSSet *)arg4;
@end
