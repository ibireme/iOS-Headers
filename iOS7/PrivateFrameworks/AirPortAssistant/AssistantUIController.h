/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AssistantUIDelegateResult-Protocol.h"
#import "AutoGuessUIDelegate-Protocol.h"
#import "SetupUIConfigDelegate-Protocol.h"
#import "SetupUIDelegate-Protocol.h"
#import "StepByStepUIDelegate-Protocol.h"

@class AUSetupController, AutoGuessController, NSArray, NSDictionary, NSMutableDictionary, NSString, StepByStepController;

@interface AssistantUIController : NSObject <AutoGuessUIDelegate, SetupUIDelegate, StepByStepUIDelegate, AssistantUIDelegateResult, SetupUIConfigDelegate>
{
    id _delegate;
    NSMutableDictionary *_setupOptions;
    int _state;
    _Bool _canceling;
    AutoGuessController *_autoGuessController;
    AUSetupController *_setupController;
    StepByStepController *_stepByStepController;
    NSDictionary *_guessCompleteDict;
    int _connectionStatusSelectorAwaitingResolution;
    NSDictionary *_lastAssociatedInfo;
    NSDictionary *_lastAutoguessInstrumentation;
    NSDictionary *_lastSetupInstrumentation;
    NSDictionary *_lastStepByStepInstrumentation;
    NSString *_targetMACAddress;
    NSDictionary *_targetScanRecord;
    NSDictionary *_targetBrowseRecord;
    NSArray *_paramScanResults;
}

@property(retain) NSDictionary *lastStepByStepInstrumentation; // @synthesize lastStepByStepInstrumentation=_lastStepByStepInstrumentation;
@property(retain) NSDictionary *lastSetupInstrumentation; // @synthesize lastSetupInstrumentation=_lastSetupInstrumentation;
@property(retain) NSDictionary *lastAutoguessInstrumentation; // @synthesize lastAutoguessInstrumentation=_lastAutoguessInstrumentation;
@property(retain) NSDictionary *lastAssociatedInfo; // @synthesize lastAssociatedInfo=_lastAssociatedInfo;
@property(readonly) int connectionStatusSelectorAwaitingResolution; // @synthesize connectionStatusSelectorAwaitingResolution=_connectionStatusSelectorAwaitingResolution;
@property(retain) NSDictionary *guessCompleteDict; // @synthesize guessCompleteDict=_guessCompleteDict;
@property(retain) StepByStepController *stepByStepController; // @synthesize stepByStepController=_stepByStepController;
@property(retain) AUSetupController *setupController; // @synthesize setupController=_setupController;
@property(retain) AutoGuessController *autoGuessController; // @synthesize autoGuessController=_autoGuessController;
@property(readonly) int state; // @synthesize state=_state;
@property(retain) NSMutableDictionary *setupOptions; // @synthesize setupOptions=_setupOptions;
@property id delegate; // @synthesize delegate=_delegate;
@property(retain) NSArray *paramScanResults; // @synthesize paramScanResults=_paramScanResults;
@property(retain) NSDictionary *targetBrowseRecord; // @synthesize targetBrowseRecord=_targetBrowseRecord;
@property(retain) NSDictionary *targetScanRecord; // @synthesize targetScanRecord=_targetScanRecord;
@property(retain) NSString *targetMACAddress; // @synthesize targetMACAddress=_targetMACAddress;
- (void)stepByStepNextStep:(int)arg1 paramDict:(id)arg2;
- (void)stepByStepCompleteWithResult:(int)arg1 paramDict:(id)arg2;
- (void)stepByStepProgressUpdated:(int)arg1 status:(int)arg2 paramString:(id)arg3;
- (void)setupUIConfigPrompt:(int)arg1 paramDict:(id)arg2 forController:(id)arg3;
- (void)setupUIConfigConnectionStatusUpdated:(int)arg1 status:(int)arg2 paramDict:(id)arg3 forController:(id)arg4;
- (void)setupCompleteWithResult:(int)arg1 baseStationInfo:(id)arg2 forController:(id)arg3;
- (void)setupProgressUpdated:(int)arg1 status:(int)arg2 paramDict:(id)arg3 forController:(id)arg4;
- (void)autoguessProgressComplete:(id)arg1;
- (void)autoguessProgressUpdated:(int)arg1 paramString:(id)arg2;
- (void)autoguessUpdateTargetInfo:(id)arg1;
- (void)presentUIForStepByStepNextStepResult:(int)arg1 withOptions:(id)arg2;
- (void)showUIConfigPromptResult:(int)arg1 withOptions:(id)arg2;
- (void)presentUIForConnectionVerificationResult:(int)arg1 withOptions:(id)arg2;
- (void)deliverSetupUIConfigResult:(int)arg1 withOptions:(id)arg2;
- (id)modifyTopoUIInLayer:(id)arg1 withLayout:(id)arg2 andOwningView:(id)arg3 targetProductID:(id)arg4 targetDeviceKind:(id)arg5 targetName:(id)arg6 targetWiFiName:(id)arg7 sourceProductID:(id)arg8 sourceDeviceKind:(id)arg9 sourceName:(id)arg10 sourceWiFiName:(id)arg11 connectionType:(id)arg12;
- (int)doneWithAssistant:(_Bool)arg1;
- (int)cancelCurrentAssistantState:(_Bool)arg1;
- (int)startRestoreFromAutoGuessRecommendation;
- (int)startStepByStepFromAutoGuessRecommendation;
- (int)startSetupFromAutoGuessRecommendation:(id)arg1;
- (int)startAutoGuess;
- (void)dealloc;
- (id)init;

@end

