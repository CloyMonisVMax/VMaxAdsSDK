//
//  AdInfo.h
//  VMaxAdSDK
//
//  Created by mac  on 29/04/20.
//  Copyright © 2020 Vserv.mobi. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface VmaxAdInfo : NSObject

@property (strong, nonatomic) NSString* adDescription; // got
@property (assign, nonatomic) NSTimeInterval adDuration; // got
@property (strong, nonatomic) NSString* title; // got
@property (assign,nonatomic) Boolean isSkippable;
@property (strong, nonatomic) NSString* contentType;
@property (strong, nonatomic) NSString* adId; // got
@property (strong, nonatomic) NSString* adSystem; // got
@property (nonatomic) NSInteger height; // got
@property (nonatomic) NSInteger width; // got
@property (nonatomic) NSInteger* totalAds; // not to do
@property (nonatomic) NSInteger* adPosition; // not to do
@property (nonatomic) NSTimeInterval* timeOffset; // current time of video
@property (nonatomic) Boolean* isBumper;
@property (nonatomic) NSInteger* podIndex;
@property (nonatomic) NSString* mediaBitrate;
@property (strong, nonatomic) NSString* creativeId;
@property (strong, nonatomic) NSString* advertiserName;

@end
