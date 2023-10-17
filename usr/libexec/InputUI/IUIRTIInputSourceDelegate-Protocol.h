//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class RTIDataPayload, RTIInputSystemSourceSession;
@protocol RTIInputSystemPayloadDelegate;

@protocol IUIRTIInputSourceDelegate <NSObject>
- (id <RTIInputSystemPayloadDelegate>)serviceSessionPayloadDelegate;
- (void)inputSource:(RTIInputSystemSourceSession *)arg1 didGenerateTextActionPayload:(RTIDataPayload *)arg2;
@end
