//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIRepeatedAction;

@protocol UIRepeatedActionDelegate <NSObject>
- (id)repeatedAction:(UIRepeatedAction *)arg1 willInvokeWithObject:(id)arg2 forPhase:(unsigned long long)arg3;
- (_Bool)shouldInvokeRepeatedAction:(UIRepeatedAction *)arg1 forPhase:(unsigned long long)arg2;
@end

